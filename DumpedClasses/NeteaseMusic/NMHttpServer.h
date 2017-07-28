//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASINetworkQueue, NMAnonymousLoginRequest, NSMutableArray, NSMutableDictionary;

@interface NMHttpServer : NSObject
{
    ASINetworkQueue *_networkQueue;
    NSMutableDictionary *_requestTable;
    _Bool _logoutAlertShown;
    NMAnonymousLoginRequest *_anonymousLogin;
    _Bool _anonymousLoginStarted;
    NSMutableArray *_requestBeforeAnonyous;
    long long _unicomRequestFailedCount;
}

+ (id)asiRequestForNobodyRequest:(id)arg1;
+ (_Bool)requestShouldGotoTelecomProxy:(id)arg1;
+ (id)generateHeaderDictionary;
+ (id)asiRequestForOriginalRequest:(id)arg1;
+ (id)server;
- (void).cxx_destruct;
- (void)handlePrivateMessageReqeust:(id)arg1;
- (void)handleFollowReqeustFailed:(id)arg1;
- (void)handleFollowReqeust:(id)arg1;
- (void)_handleFollowRequest:(id)arg1 code:(long long)arg2;
- (void)hanldeArtistSubRequest:(id)arg1;
- (void)parseFollowResult:(id)arg1;
- (_Bool)shouldEvaluateTrust:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (id)_processHttpDnsedCookie:(id)arg1;
- (void)requestStarted:(id)arg1;
- (void)alertLogout:(id)arg1;
- (void)cancelAllRequestWithClass:(Class)arg1;
- (void)cancelRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)finishAnonymousLoginFirst;
- (void)startAnonymousLoginFirst;
- (void)removeRequestFromTable:(id)arg1;
- (id)createASIHTTPRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end
