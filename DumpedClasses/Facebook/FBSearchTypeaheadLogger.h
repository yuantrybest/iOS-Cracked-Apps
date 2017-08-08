//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGraphSearchTypeaheadKeystrokeLogger, FBSearchTypeaheadSessionConfig, FBUserSession;

@interface FBSearchTypeaheadLogger : NSObject
{
    FBSearchTypeaheadSessionConfig *_typeaheadSessionConfig;
    FBGraphSearchTypeaheadKeystrokeLogger *_keystrokeLogger;
    FBUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 withExtra:(id)arg2;
- (id)_connectedStateFromSuggestion:(id)arg1;
- (id)_suggestionInputLoggingExtras:(id)arg1 withSessionStatus:(id)arg2;
- (long long)_selectedIndexFromSelectedSuggestion:(id)arg1 sessionStatus:(id)arg2;
- (id)_suggestionLoggingData:(id)arg1;
- (id)keywordSuggestionLoggingData:(id)arg1;
- (id)_impressionsLoggingInfoWithImpressions:(id)arg1;
- (id)_commonInputLoggingExtrasWithSessionStatus:(id)arg1;
- (id)_commonExtraWithSelectedSuggestion:(id)arg1 withSessionStatus:(id)arg2;
- (id)_taTypeFromSessionStatus:(id)arg1;
- (void)_startNewKeystrokeLoggerIfNeededWithSession:(id)arg1 initialQueryString:(id)arg2;
- (void)resetTypeaheadSessionStateWithCurrentQueryString:(id)arg1;
- (void)logTypeNewText:(id)arg1 sessionStatus:(id)arg2;
- (void)logVisibleSuggestionsUpdated:(id)arg1 sessionStatus:(id)arg2;
- (void)logClearButtonClickWithSessionStatus:(id)arg1;
- (void)logExitWithReason:(id)arg1 sessionStatus:(id)arg2;
- (void)logSuggestionSelection:(id)arg1 withSessionStatus:(id)arg2;
- (void)logFlickerFromSuggestion:(id)arg1 toSuggestion:(id)arg2 atIndex:(unsigned long long)arg3 withSessionStatus:(id)arg4;
- (void)logInlineAction:(unsigned long long)arg1 onSuggestion:(id)arg2 withSessionStatus:(id)arg3;
- (id)init;
- (id)initWithTypeaheadSessionConfig:(id)arg1 session:(id)arg2;

@end
