/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSNumber, NSDate, RTLearnedPlaceMO, RTLearnedTransitionMO;

@interface RTLearnedVisitMO : RTCloudManagedObject

@property (nonatomic,copy) NSNumber * confidence; 
@property (nonatomic,copy) NSNumber * dataPointCount; 
@property (nonatomic,copy) NSDate * entryDate; 
@property (nonatomic,copy) NSDate * exitDate; 
@property (nonatomic,copy) NSNumber * locationLatitude; 
@property (nonatomic,copy) NSNumber * locationLongitude; 
@property (nonatomic,copy) NSNumber * locationReferenceFrame; 
@property (nonatomic,copy) NSNumber * locationUncertainty; 
@property (nonatomic,copy) NSNumber * placeConfidence; 
@property (nonatomic,copy) NSNumber * placeSource; 
@property (nonatomic,retain) RTLearnedPlaceMO * place; 
@property (nonatomic,retain) RTLearnedTransitionMO * inbound; 
@property (nonatomic,retain) RTLearnedTransitionMO * outbound; 
+(id)fetchRequest;
+(id)managedObjectWithVisit:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithVisit:(id)arg1 place:(id)arg2 inManagedObjectContext:(id)arg3 ;
@end

