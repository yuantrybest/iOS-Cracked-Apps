//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQGroupConcernedPbProxy : NSObject
{
}

+ (id)shareInstance;
- (basic_string_075b6133)setGroupDefaultListBuffer:(unsigned long long)arg1 WithUinInfoList:(id)arg2;
- (id)setGroupDefaultListOIDBSSOPKG:(unsigned long long)arg1 WithUinInfoList:(id)arg2 command:(long long)arg3 serviceType:(long long)arg4;
- (basic_string_075b6133)setGroupShilededListBuffer:(unsigned long long)arg1 WithUinInfoList:(id)arg2;
- (id)setGroupShilededListOIDBSSOPKG:(unsigned long long)arg1 WithUinInfoList:(id)arg2 command:(long long)arg3 serviceType:(long long)arg4;
- (id)parseGroupShieldedListReadRspBuffer:(char *)arg1 len:(int)arg2;
- (id)parseGroupConcernedListWriteRspBuffer:(char *)arg1 len:(int)arg2;
- (id)parseGroupConcernedListReadRspBuffer:(char *)arg1 len:(int)arg2;
- (basic_string_075b6133)setGroupConcernedListBuffer:(unsigned long long)arg1 WithUinInfoList:(id)arg2;
- (id)setGroupConcernedListOIDBSSOPKG:(unsigned long long)arg1 WithUinInfoList:(id)arg2 command:(long long)arg3 serviceType:(long long)arg4;
- (id)getOIDBSSOPKG:(long long)arg1 serviceType:(long long)arg2 buffer:(basic_string_075b6133)arg3;

@end

