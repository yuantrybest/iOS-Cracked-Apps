//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface TBPopLayerTrackingViewOperationModel : TBJSONModel
{
    NSString *_groupId;
    NSString *_operationName;
    NSDictionary *_params;
}

@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end
