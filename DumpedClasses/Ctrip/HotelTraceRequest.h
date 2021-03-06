//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, RequestHead;

@interface HotelTraceRequest : CTBusinessBean
{
    int _type;
    int _status;
    RequestHead *_head;
    double _param1;
    double _param2;
    NSString *_jsonLog;
}

@property(copy, nonatomic) NSString *jsonLog; // @synthesize jsonLog=_jsonLog;
@property(nonatomic) double param2; // @synthesize param2=_param2;
@property(nonatomic) double param1; // @synthesize param1=_param1;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

