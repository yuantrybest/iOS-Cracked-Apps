//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBTimelineTemporaryCoverPhoto, UITableViewCell;

@protocol FBTimelineCoverPhotoEditableHeaderDataSource <NSObject>
@property(nonatomic) _Bool isCoverEditMode;
@property(retain, nonatomic) FBTimelineTemporaryCoverPhoto *temporaryCoverPhoto;
- (UITableViewCell *)headerCell;
- (void)setTemporaryCoverFocus:(struct CGPoint)arg1;
- (struct CGPoint)temporaryCoverFocus;
@end
