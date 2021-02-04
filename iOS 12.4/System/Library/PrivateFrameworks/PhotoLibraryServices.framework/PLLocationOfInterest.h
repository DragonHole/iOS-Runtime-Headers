/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation;

@interface PLLocationOfInterest : NSObject {

	long long _type;
	CLLocation* _location;
	double _radius;

}

@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double radius;                      //@synthesize radius=_radius - In the implementation block
+(id)locationOfInterestWithType:(long long)arg1 location:(id)arg2 radius:(double)arg3 ;
-(id)_descriptionType;
-(id)description;
-(long long)type;
-(double)radius;
-(CLLocation *)location;
@end
