/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVFaceIDModel : NSObject
+(id)modelFileName;
+(id)loadModelAtPath:(id)arg1 error:(id*)arg2 ;
+(id)faceObservationFromFaceprintData:(id)arg1 ;
+(id)classifyFaceObservation:(id)arg1 withModel:(id)arg2 error:(id*)arg3 ;
+(BOOL)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(id)newMutablePersonsModel;
+(BOOL)addFaceObservations:(id)arg1 forPersonIdentifier:(id)arg2 toModel:(id)arg3 error:(id*)arg4 ;
+(id)defaultConfiguration;
@end

