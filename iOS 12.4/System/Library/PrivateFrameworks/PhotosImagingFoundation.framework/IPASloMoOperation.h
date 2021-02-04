/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPASloMoOperation : IPAVideoOperation {

	SCD_Struct_IP2 _timeRange;
	float _rate;

}

@property (nonatomic,readonly) float rate; 
@property (nonatomic,readonly) SCD_Struct_IP2 timeRange; 
+(id)operationFromFileURL:(id)arg1 ;
-(id)internalRepresentation;
-(SCD_Struct_IP2)timeRange;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_IP2)arg1 rate:(float)arg2 ;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(id)settingsDictionary;
-(id)identifier;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)rate;
@end
