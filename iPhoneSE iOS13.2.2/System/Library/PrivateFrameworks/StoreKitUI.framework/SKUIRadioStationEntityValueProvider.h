/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/IKEntityValueProviding.h>

@class RadioStation, NSString;

@interface SKUIRadioStationEntityValueProvider : NSObject <IKEntityValueProviding> {

	RadioStation* _station;

}

@property (nonatomic,readonly) RadioStation * station;              //@synthesize station=_station - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RadioStation *)station;
-(id)initWithStation:(id)arg1 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)rsep_stationName;
-(id)rsep_coreSeedName;
-(id)rsep_stationDescription;
@end

