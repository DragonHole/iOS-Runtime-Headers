/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MSPPosition, MSPVectorTimestamp;


@protocol MSPOrderedReplicaRecord <MSPReplicaRecord>
@property (nonatomic,readonly) MSPPosition * position; 
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp; 
@required
-(MSPPosition *)position;
-(MSPVectorTimestamp *)positionTimestamp;

@end
