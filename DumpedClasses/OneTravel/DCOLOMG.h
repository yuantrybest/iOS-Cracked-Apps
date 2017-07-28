//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCOLWaitTripBusinessModel;

@interface DCOLOMG : NSObject
{
    DCOLWaitTripBusinessModel *_businessModel;
}

@property(copy, nonatomic) DCOLWaitTripBusinessModel *businessModel; // @synthesize businessModel=_businessModel;
- (void).cxx_destruct;
- (_Bool)_isCrossCity;
- (_Bool)_isStationMode;
- (id)_source;
- (id)_modelType;
- (id)_dateID;
- (id)_carpoolID;
- (id)_from;
- (id)_routeID;
- (_Bool)_isCarpool;
- (void)OMGClickBackButton;
- (void)OMGGestureBack;
- (void)OMGCancelDidClick;
- (void)OMGWaitTripShow;
- (void)OMGTripInfoViewIsOpen:(_Bool)arg1;
- (void)OMGPackageCardShowWithList:(id)arg1;
- (void)OMGOrderlistUVWithContext:(id)arg1;
- (void)OMGADViewDidClickWithContext:(id)arg1;
- (void)OMGADViewShowWithContext:(id)arg1;
- (void)OMGSwitchTabWithContext:(id)arg1;
- (void)OMGInviteStatusWithList:(id)arg1;
- (void)OMGListTimeoutShow:(_Bool)arg1;
- (void)OMGTimeoutTipButtonClick;
- (void)OMGYellowBarDidClick;
- (void)OMGYellowBarShow;
- (void)OMGLoadMore;

@end
