//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDBDao.h"

@interface KuQunGroupMuteDBDao : BaseDBDao
{
}

- (_Bool)updateNotifyStateWithAllGroup:(int)arg1;
- (_Bool)isExistRowWithGroupId:(long long)arg1 witOutState:(id *)arg2 withIsMute:(id *)arg3;
- (int)p_getMuteValueWithGroupId:(long long)arg1;
- (_Bool)updateNotifyStateWithGroupId:(long long)arg1 withNotifyState:(int)arg2;
- (int)notifyState:(long long)arg1;
- (_Bool)isGroupMuted:(long long)arg1;
- (_Bool)unmuteGroup:(long long)arg1;
- (_Bool)muteGroup:(long long)arg1;

@end

