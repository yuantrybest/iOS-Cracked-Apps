//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HungAdPlayerDataItem : NSObject
{
    NSString *_playUrl;
    double _playTime;
    NSString *_jumpWebUrl;
    struct CGRect _viewFrame;
    int _playerType;
    _Bool _isMute;
}

@property(nonatomic) int playerType; // @synthesize playerType=_playerType;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(copy, nonatomic) NSString *jumpWebUrl; // @synthesize jumpWebUrl=_jumpWebUrl;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(copy, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
- (void).cxx_destruct;
- (id)init;

@end

