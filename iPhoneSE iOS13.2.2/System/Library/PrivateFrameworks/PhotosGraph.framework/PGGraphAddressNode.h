/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphLocationNode.h>
#import <libobjc.A.dylib/PGGraphPortraitLocationNamedEntity.h>

@class PPLocationNamedEntities, NSString;

@interface PGGraphAddressNode : PGGraphLocationNode <PGGraphPortraitLocationNamedEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PPLocationNamedEntities * pg_locationNamedEntity; 
-(CLLocationCoordinate2D)coordinate;
-(id)UUID;
-(id)location;
-(BOOL)isOcean;
-(id)stateNode;
-(PPLocationNamedEntities *)pg_locationNamedEntity;
-(void)enumerateAreaNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)areaNodes;
-(id)streetNode;
-(id)districtNode;
-(id)cityNode;
-(id)countryNode;
-(void)addressEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)locationIsImproved;
-(BOOL)isPersonHomeOrWorkAddress;
-(void)enumeratePersonHomeOrWorkNodesUsingBlock:(/*^block*/id)arg1 ;
@end

