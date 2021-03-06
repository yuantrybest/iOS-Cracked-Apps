//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXNode.h"

#import "UITextFieldDelegate.h"

@class NSString, UIColor;

@interface NXInputNode : NXNode <UITextFieldDelegate>
{
    NSString *_placeholder;
    NSString *_pattern;
    NSString *_value;
    UIColor *_color;
    NSString *_fontFamily;
    double _fontSize;
    NSString *_fontWeight;
    NSString *_fontStyle;
    long long _textAlign;
    long long _tag;
}

+ (void)static_nxRegister;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) long long textAlign; // @synthesize textAlign=_textAlign;
@property(copy, nonatomic) NSString *fontStyle; // @synthesize fontStyle=_fontStyle;
@property(copy, nonatomic) NSString *fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)valueChanged:(id)arg1;
- (void)unload;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (long long)currentKeyboradType;
- (id)font;
- (void)fillGeneratedProps:(id)arg1;
- (void)fillInitialProperties;
- (id)propConfigNode_textAlign;
- (id)propConfigNode_fontStyle;
- (id)propConfigNode_fontWeight;
- (id)propConfigNode_fontSize;
- (id)propConfigNode_fontFamily;
- (id)propConfigNode_color;
- (id)propConfigNode_value;
- (id)propConfigNode_pattern;
- (id)propConfigNode_placeholder;
- (id)propConfigNode_tag;
- (id)nodeName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

