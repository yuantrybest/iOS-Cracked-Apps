//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBThemeKitContext;

@interface UIView (ThemeKit)
+ (id)viewWithId:(id)arg1 groupID:(id)arg2 context:(id)arg3;
+ (id)viewWithId:(id)arg1 context:(id)arg2;
+ (id)themeKitStyleWithId:(id)arg1 groupID:(id)arg2 context:(id)arg3;
+ (id)themeKitStyleWithId:(id)arg1 context:(id)arg2;
- (id)tkAccessibilityLabel;
- (double)tkCornerRadius;
- (double)tkAlpha;
- (id)tkColor;
- (id)tkBackgroundColor;
- (double)tkOriginY;
- (double)tkOriginX;
- (double)tkPaddingBottom;
- (double)tkPaddingRight;
- (double)tkPaddingLeft;
- (double)tkPaddingTop;
- (double)tkMarginBottom;
- (double)tkMarginRight;
- (double)tkMargin;
- (double)tkMarginTop;
- (double)tkMarginY;
- (_Bool)tkHidden;
- (double)tkMarginLeft;
- (double)tkMarginX;
- (double)tkHeight;
- (double)tkWidth;
- (id)themeKitStyle;
@property(nonatomic) __weak TBThemeKitContext *themeKitContext;
@property(copy, nonatomic) NSString *themeKitId;
@end

