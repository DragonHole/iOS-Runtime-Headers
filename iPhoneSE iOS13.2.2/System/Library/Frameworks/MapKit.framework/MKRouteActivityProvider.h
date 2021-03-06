/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceActivityProvider.h>

@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider {

	MKMapItem* _sourceMapItem;
	unsigned long long _transportType;

}

@property (nonatomic,retain) MKMapItem * destinationMapItem; 
@property (nonatomic,retain) MKMapItem * sourceMapItem;                     //@synthesize sourceMapItem=_sourceMapItem - In the implementation block
@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
-(unsigned long long)transportType;
-(void)setTransportType:(unsigned long long)arg1 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 ;
-(id)activityURL;
-(id)activitySourceTitle;
-(MKMapItem *)sourceMapItem;
-(MKMapItem *)destinationMapItem;
-(void)setDestinationMapItem:(MKMapItem *)arg1 ;
-(void)setSourceMapItem:(MKMapItem *)arg1 ;
@end

