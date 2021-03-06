//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OSSRequestInterceptor.h"

@class NSString;

@interface OSSSignerInterceptor : NSObject <OSSRequestInterceptor>
{
    id <OSSCredentialProvider> _credentialProvider;
}

@property(retain, nonatomic) id <OSSCredentialProvider> credentialProvider; // @synthesize credentialProvider=_credentialProvider;
- (void).cxx_destruct;
- (id)interceptRequestMessage:(id)arg1;
- (id)initWithCredentialProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

