//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIColor, UIImage, UILabel;

@interface NVUIGradientButton : UIControl
{
    double fontHeight;
    _Bool _gradientEnabled;
    int _style;
    int _textAlignment;
    double _cornerRadius;
    double _borderWidth;
    UIColor *_tintColor;
    UIColor *_highlightedTintColor;
    UIColor *_borderColor;
    UIColor *_highlightedBorderColor;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIColor *_textShadowColor;
    UIColor *_highlightedTextShadowColor;
    NSString *_text;
    NSString *_highlightedText;
    NSString *_disabledText;
    UILabel *_titleLabel;
    UIImage *_leftAccessoryImage;
    UIImage *_leftHighlightedAccessoryImage;
    UIImage *_rightAccessoryImage;
    UIImage *_rightHighlightedAccessoryImage;
    UIImage *_topAccessoryImage;
    UIImage *_topHighlightedAccessoryImage;
    UIImage *_bottomAccessoryImage;
    UIImage *_bottomHighlightedAccessoryImage;
}

@property(retain, nonatomic) UIImage *bottomHighlightedAccessoryImage; // @synthesize bottomHighlightedAccessoryImage=_bottomHighlightedAccessoryImage;
@property(retain, nonatomic) UIImage *bottomAccessoryImage; // @synthesize bottomAccessoryImage=_bottomAccessoryImage;
@property(retain, nonatomic) UIImage *topHighlightedAccessoryImage; // @synthesize topHighlightedAccessoryImage=_topHighlightedAccessoryImage;
@property(retain, nonatomic) UIImage *topAccessoryImage; // @synthesize topAccessoryImage=_topAccessoryImage;
@property(retain, nonatomic) UIImage *rightHighlightedAccessoryImage; // @synthesize rightHighlightedAccessoryImage=_rightHighlightedAccessoryImage;
@property(retain, nonatomic) UIImage *rightAccessoryImage; // @synthesize rightAccessoryImage=_rightAccessoryImage;
@property(retain, nonatomic) UIImage *leftHighlightedAccessoryImage; // @synthesize leftHighlightedAccessoryImage=_leftHighlightedAccessoryImage;
@property(retain, nonatomic) UIImage *leftAccessoryImage; // @synthesize leftAccessoryImage=_leftAccessoryImage;
@property(nonatomic, getter=isGradientEnabled) _Bool gradientEnabled; // @synthesize gradientEnabled=_gradientEnabled;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *disabledText; // @synthesize disabledText=_disabledText;
@property(copy, nonatomic) NSString *highlightedText; // @synthesize highlightedText=_highlightedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *highlightedTextShadowColor; // @synthesize highlightedTextShadowColor=_highlightedTextShadowColor;
@property(retain, nonatomic) UIColor *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *highlightedBorderColor; // @synthesize highlightedBorderColor=_highlightedBorderColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *highlightedTintColor; // @synthesize highlightedTintColor=_highlightedTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) int style; // @synthesize style=_style;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGGradient *)newGradientAccordingToCurrentState;
- (id)bottomAccessoryImageAccordingToCurrentState;
- (id)topAccessoryImageAccordingToCurrentState;
- (id)rightAccessoryImageAccordingToCurrentState;
- (id)leftAccessoryImageAccordingToCurrentState;
- (id)textAccordingToCurrentState;
- (id)textShadowColorAccordingToCurrentState;
- (id)textColorAccordingToCurrentState;
- (id)borderColorAccordingToCurrentState;
- (id)tintColorAccordingToCurrentState;
- (void)setRightAccessoryImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setLeftAccessoryImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setText:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTextShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTextColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)isHighlightedOrSelected;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 cornerRadius:(double)arg2 borderWidth:(double)arg3 andText:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 cornerRadius:(double)arg3 borderWidth:(double)arg4 andText:(id)arg5 textAlignment:(int)arg6;
- (void)updateAccordingToStyle;
- (void)performDefaultInit;
- (void)dealloc;

@end

