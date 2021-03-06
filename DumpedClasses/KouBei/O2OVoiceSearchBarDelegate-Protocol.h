//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NlsRecognizerResult, O2OVoiceSearchBar;

@protocol O2OVoiceSearchBarDelegate <NSObject>

@optional
- (void)voiceSearchBarDidError:(O2OVoiceSearchBar *)arg1 error:(NSString *)arg2;
- (void)voiceSearchBarResume:(O2OVoiceSearchBar *)arg1;
- (void)voiceSearchBarWillCancel:(O2OVoiceSearchBar *)arg1;
- (void)voiceSearchBar:(O2OVoiceSearchBar *)arg1 volumeDidChange:(unsigned long long)arg2;
- (void)voiceSearchBarDidCancel:(O2OVoiceSearchBar *)arg1;
- (void)voiceSearchBarDidEnd:(O2OVoiceSearchBar *)arg1 result:(NlsRecognizerResult *)arg2;
- (void)voiceSearchBarDidSearch:(O2OVoiceSearchBar *)arg1;
- (void)voiceSearchBarDidRecord:(O2OVoiceSearchBar *)arg1;
@end

