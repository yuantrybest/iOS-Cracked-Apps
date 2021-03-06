//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AccountAuthUtils : NSObject
{
}

+ (id)getUpdateDic:(id)arg1;
+ (id)getCurrentNetWorkType;
+ (unsigned long long)lockScreenScene;
+ (id)buildLoginOptionsWithLoginId:(id)arg1 password:(id)arg2 loginType:(unsigned long long)arg3 addNewAccount:(_Bool)arg4 startLoginAutoly:(_Bool)arg5 autoLoginResult:(id)arg6 extraInfo:(id)arg7;
+ (_Bool)startLoginAppWithLoginId:(id)arg1 password:(id)arg2 loginType:(unsigned long long)arg3 addNewAccount:(_Bool)arg4 startLoginAutoly:(_Bool)arg5 autoLoginResult:(id)arg6 extraInfo:(id)arg7 animated:(_Bool)arg8;
+ (id)queryParamsOfUrl:(id)arg1;
+ (id)getApdidToken;
+ (id)getApdid;
+ (id)getUmidToken;
+ (id)getWalletTid;
+ (void)clearSafePayTid;
+ (id)getSafePayTid;
+ (id)screenHeight;
+ (id)screenWidth;
+ (id)userAgent;
+ (id)osVersion;
+ (id)terminalName;
+ (id)clientId;

@end

