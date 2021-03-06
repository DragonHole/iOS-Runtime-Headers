/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MKMapViewSuspendedEffectsToken.h>

@protocol _MKMapViewSuspendedEffectsToken <NSObject>
@required
-(void)invalidate;

@end


@class MKMapView, NSString;

@interface _MKMapViewSuspendedEffectsToken : NSObject <_MKMapViewSuspendedEffectsToken> {

	BOOL _invalidated;
	MKMapView* _owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOwner:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

