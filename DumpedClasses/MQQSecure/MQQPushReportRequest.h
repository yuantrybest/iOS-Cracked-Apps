//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQSharkBaseRequest.h"

@class NSArray;

@interface MQQPushReportRequest : MQQSharkBaseRequest
{
    _Bool _allReported;
    NSArray *_recordArray;
    NSArray *_reportedRecordArray;
}

@property(nonatomic) _Bool allReported; // @synthesize allReported=_allReported;
@property(retain, nonatomic) NSArray *reportedRecordArray; // @synthesize reportedRecordArray=_reportedRecordArray;
@property(retain, nonatomic) NSArray *recordArray; // @synthesize recordArray=_recordArray;
- (void)didSharkDataFinish:(const vector_aa1d262e *)arg1;
- (_Bool)getCmdId:(int *)arg1 requestData:(vector_aa1d262e *)arg2;
- (void)reportWithRecords:(id)arg1;
- (void)dealloc;
- (id)init;

@end

