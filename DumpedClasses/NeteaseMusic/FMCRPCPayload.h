//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface FMCRPCPayload : NSObject
{
    unsigned char _rpcType;
    unsigned int _functionID;
    unsigned int _correlationID;
    NSData *_jsonData;
    NSData *_binaryData;
}

+ (id)rpcPayloadWithData:(id)arg1;
@property(retain) NSData *binaryData; // @synthesize binaryData=_binaryData;
@property(retain) NSData *jsonData; // @synthesize jsonData=_jsonData;
@property unsigned int correlationID; // @synthesize correlationID=_correlationID;
@property unsigned int functionID; // @synthesize functionID=_functionID;
@property unsigned char rpcType; // @synthesize rpcType=_rpcType;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)size;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)init;

@end

