//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSArray<KTVAlbumInfo>;

@interface KTVAlbumInfoList : KTVObjectModel
{
    NSArray<KTVAlbumInfo> *_list;
    long long _total;
    long long _next;
}

@property(nonatomic) long long next; // @synthesize next=_next;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(retain, nonatomic) NSArray<KTVAlbumInfo> *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end
