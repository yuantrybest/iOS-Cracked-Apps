//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TuSDKPFSticker;

@interface TuSDKPFStickerResult : NSObject
{
    float _degree;
    TuSDKPFSticker *_sticker;
    struct CGRect _center;
}

+ (id)initWithSticker:(id)arg1 center:(struct CGRect)arg2 degree:(float)arg3;
@property(retain, nonatomic) TuSDKPFSticker *sticker; // @synthesize sticker=_sticker;
@property(nonatomic) float degree; // @synthesize degree=_degree;
@property(nonatomic) struct CGRect center; // @synthesize center=_center;
- (void).cxx_destruct;

@end
