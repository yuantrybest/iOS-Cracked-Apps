//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSDictionary, NSString;

@interface GWSectionInfo : GWObject
{
    NSString *_sectionIndex;
    NSString *_title;
    NSString *_imageName;
    NSString *_sectionDescription;
    NSDictionary *_sectionInfo;
}

@property(copy, nonatomic) NSDictionary *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(copy, nonatomic) NSString *sectionDescription; // @synthesize sectionDescription=_sectionDescription;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) NSString *sectionIndex; // @synthesize sectionIndex=_sectionIndex;
- (void).cxx_destruct;

@end
