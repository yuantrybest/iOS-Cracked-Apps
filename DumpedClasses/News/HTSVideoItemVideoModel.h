//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class HTSVideoItemVideoCoverModel, HTSVideoItemVideoDynamicCoverModel, NSArray, NSNumber, NSString;

@interface HTSVideoItemVideoModel : MTLModel <MTLJSONSerializing>
{
    NSString *_uri;
    NSArray *_urlList;
    NSArray *_downloadUrl;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_duration;
    HTSVideoItemVideoCoverModel *_cover;
    HTSVideoItemVideoDynamicCoverModel *_dynamicCover;
}

+ (id)dynamicCoverJSONTransformer;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) HTSVideoItemVideoDynamicCoverModel *dynamicCover; // @synthesize dynamicCover=_dynamicCover;
@property(retain, nonatomic) HTSVideoItemVideoCoverModel *cover; // @synthesize cover=_cover;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(copy, nonatomic) NSArray *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(copy, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
