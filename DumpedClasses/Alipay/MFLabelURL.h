//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont;

@interface MFLabelURL : NSObject
{
    _Bool _underLineForLink;
    id _linkData;
    UIColor *_color;
    UIColor *_underLineColor;
    UIColor *_highlightColor;
    UIFont *_font;
    struct _NSRange _range;
}

+ (id)detectPhoneNumber:(id)arg1;
+ (id)detectURL:(id)arg1;
+ (void)setCustomDetectMethod:(CDUnknownBlockType)arg1;
+ (id)detectLinks:(id)arg1 linkType:(int)arg2;
+ (id)urlWithLinkData:(id)arg1 range:(struct _NSRange)arg2 color:(id)arg3 font:(id)arg4 underLineForLink:(_Bool)arg5;
+ (id)urlWithLinkData:(id)arg1 range:(struct _NSRange)arg2 color:(id)arg3 underLineForLink:(_Bool)arg4;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *underLineColor; // @synthesize underLineColor=_underLineColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool underLineForLink; // @synthesize underLineForLink=_underLineForLink;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) id linkData; // @synthesize linkData=_linkData;
- (void).cxx_destruct;

@end
