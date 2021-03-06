//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class ANKeyValueTable, NSArray, NSString, QLASIHTTPRequest;

@interface QLPropertyMineModel : QLRequestModel
{
    NSString *_strPf;
    NSArray *_coinTypeList;
    NSArray *_propetyList;
    NSArray *_jceRropetyList;
    QLASIHTTPRequest *_dataRequest;
    ANKeyValueTable *_cacheTable;
}

+ (id)convertJCEToData:(id)arg1;
@property(retain, nonatomic) ANKeyValueTable *cacheTable; // @synthesize cacheTable=_cacheTable;
@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) NSArray *jceRropetyList; // @synthesize jceRropetyList=_jceRropetyList;
@property(retain, nonatomic) NSArray *propetyList; // @synthesize propetyList=_propetyList;
@property(retain, nonatomic) NSArray *coinTypeList; // @synthesize coinTypeList=_coinTypeList;
@property(retain, nonatomic) NSString *strPf; // @synthesize strPf=_strPf;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)dealWithMinePropertyResponse:(id)arg1 resp:(id)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)cancel;
- (void)cancelDataRequest;
- (void)dealloc;
- (id)init;

@end

