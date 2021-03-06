//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDIMMessageContModel, DDIMMessageDBModel, DDIMUserInfo, NSString;

@interface DDIMTableViewCellModel : NSObject
{
    _Bool _isShowTime;
    _Bool _isShowFooter;
    _Bool _isShowAvatar;
    _Bool _isPlaying;
    _Bool _isShowPeerIcon;
    DDIMMessageDBModel *_messageModel;
    long long _cellType;
    long long _cellDirection;
    long long _cellStatus;
    NSString *_avatarURL;
    NSString *_speakerName;
    NSString *_prefixUrl;
    DDIMUserInfo *_userInfo;
    DDIMMessageContModel *_messageContModel;
    double _cellHeight;
    id <DDIMCellModelDelegate> _cellModelDelegate;
}

@property(nonatomic) __weak id <DDIMCellModelDelegate> cellModelDelegate; // @synthesize cellModelDelegate=_cellModelDelegate;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) DDIMMessageContModel *messageContModel; // @synthesize messageContModel=_messageContModel;
@property(copy, nonatomic) DDIMUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *prefixUrl; // @synthesize prefixUrl=_prefixUrl;
@property(nonatomic) _Bool isShowPeerIcon; // @synthesize isShowPeerIcon=_isShowPeerIcon;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isShowAvatar; // @synthesize isShowAvatar=_isShowAvatar;
@property(nonatomic) _Bool isShowFooter; // @synthesize isShowFooter=_isShowFooter;
@property(nonatomic) _Bool isShowTime; // @synthesize isShowTime=_isShowTime;
@property(retain, nonatomic) NSString *speakerName; // @synthesize speakerName=_speakerName;
@property(retain, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(nonatomic) long long cellStatus; // @synthesize cellStatus=_cellStatus;
@property(nonatomic) long long cellDirection; // @synthesize cellDirection=_cellDirection;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) DDIMMessageDBModel *messageModel; // @synthesize messageModel=_messageModel;
- (void).cxx_destruct;
- (void)refreshUserInfo:(id)arg1;
- (void)unsubscribeNotification;
- (void)subscribeUserInfoChangeNotification;
- (void)dealloc;
- (id)init;

@end

