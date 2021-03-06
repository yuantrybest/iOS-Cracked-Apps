//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMomentItemBase.h"

@class NSArray, NSString, QLMomentMedia;

@interface QLMomentContent : QLMomentItemBase
{
    NSString *_textContent;
    NSString *_favoriteTxt;
    NSArray *_expressions;
    QLMomentMedia *_mediaObject;
    NSString *_videoTrackTime;
}

+ (id)contentWithDictionary:(id)arg1;
+ (id)formatObjectModelByJCE:(id)arg1;
@property(retain, nonatomic) NSString *videoTrackTime; // @synthesize videoTrackTime=_videoTrackTime;
@property(retain, nonatomic) QLMomentMedia *mediaObject; // @synthesize mediaObject=_mediaObject;
@property(retain, nonatomic) NSArray *expressions; // @synthesize expressions=_expressions;
@property(retain, nonatomic) NSString *favoriteTxt; // @synthesize favoriteTxt=_favoriteTxt;
@property(retain, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

