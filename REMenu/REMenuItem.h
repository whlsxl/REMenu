//
// REMenuItem.h
// REMenu
//
// Copyright (c) 2013 Roman Efimov (https://github.com/romaonthego)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <Foundation/Foundation.h>

@interface REMenuItem : NSObject

@property (strong, readwrite, nonatomic, nullable) UIColor *backgroundColor;
@property (strong, readwrite, nonatomic, nullable) UIColor *separatorColor;
@property (strong, readwrite, nonatomic, nullable) UIFont *font;
@property (strong, readwrite, nonatomic, nullable) UIColor *textColor;
@property (strong, readwrite, nonatomic, nullable) UIColor *textShadowColor;
@property (assign, readwrite, nonatomic) CGSize textOffset;
@property (assign, readwrite, nonatomic) CGSize textShadowOffset;
@property (strong, readwrite, nonatomic, nullable) UIColor *highlightedBackgroundColor;
@property (strong, readwrite, nonatomic, nullable) UIColor *highlightedSeparatorColor;
@property (strong, readwrite, nonatomic, nullable) UIColor *highlightedTextColor;
@property (strong, readwrite, nonatomic, nullable) UIColor *highlightedTextShadowColor;
@property (assign, readwrite, nonatomic) CGSize highlightedTextShadowOffset;
@property (assign, readwrite, nonatomic) NSTextAlignment textAlignment;
@property (strong, readwrite, nonatomic, nullable) UIFont *subtitleFont;
@property (strong, readwrite, nonatomic, nullable) UIColor *subtitleTextColor;
@property (strong, readwrite, nonatomic, nullable) UIColor *subtitleTextShadowColor;
@property (assign, readwrite, nonatomic) CGSize subtitleTextOffset;
@property (assign, readwrite, nonatomic) CGSize subtitleTextShadowOffset;
@property (strong, readwrite, nonatomic, nullable) UIColor *subtitleHighlightedTextColor;
@property (strong, readwrite, nonatomic, nullable) UIColor *subtitleHighlightedTextShadowColor;
@property (assign, readwrite, nonatomic) CGSize subtitleHighlightedTextShadowOffset;
@property (assign, readwrite, nonatomic) NSTextAlignment subtitleTextAlignment;
@property (strong, readwrite, nonatomic, nullable) UIColor *imageBackgroundColor;

@property (copy, readwrite, nonatomic, nullable) NSString *title;
@property (copy, readwrite, nonatomic, nullable) NSString *subtitle;
@property (copy, readwrite, nonatomic, nullable) NSString *badge;
@property (strong, readwrite, nonatomic, nullable) UIImage *image;
@property (strong, readwrite, nonatomic, nullable) UIImage *highlightedImage;
@property (copy, readwrite, nonatomic, nullable) void (^action)( REMenuItem * _Nonnull item);
@property (assign, readwrite, nonatomic) NSInteger tag;
@property (strong, readwrite, nonatomic, nullable) UIView *customView;

- (nonnull id)initWithTitle:(nullable NSString *)title image:(nullable UIImage *)image highlightedImage:(nullable UIImage *)highlightedImage action:(nullable void (^)( REMenuItem * _Nonnull item))action;
- (nonnull id)initWithTitle:(nullable NSString *)title subtitle:(nullable NSString *)subtitle image:(nullable UIImage *)image highlightedImage:(nullable UIImage *)highlightedImage action:(nullable void (^)(REMenuItem * _Nonnull item))action;
- (nonnull id)initWithTitle:(nullable NSString *)title image:(nullable UIImage *)image backgroundColor:(nullable UIColor *)bgColor highlightedImage:(nullable UIImage *)highlightedImage action:(nullable void (^)(REMenuItem * _Nonnull item))action;
- (nonnull id)initWithTitle:(nullable NSString *)title subtitle:(nullable NSString *)subtitle image:(nullable UIImage *)image backgroundColor:(nullable UIColor *)bgColor highlightedImage:(nullable UIImage *)highlightedImage action:(nullable void (^)(REMenuItem * _Nonnull item))action;
- (nonnull id)initWithCustomView:(nullable UIView *)customView action:(nullable void (^)(REMenuItem * _Nonnull item))action;
- (nonnull id)initWithCustomView:(nullable UIView *)customView;
- (void)setNeedsLayout;

@end
