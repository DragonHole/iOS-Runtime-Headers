/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditContentUpdate.h>

@protocol MSPMutableObject, MSPImmutableObject;
@class NSString;

@interface _MSPContainerEditContentUpdate : _MSPContainerEdit <MSPContainerEditContentUpdate> {

	id<MSPMutableObject> _updatedObject;
	id<MSPImmutableObject> _updatedImmutableObject;

}

@property (nonatomic,readonly) id<MSPMutableObject> updatedObject;                         //@synthesize updatedObject=_updatedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<MSPImmutableObject> updatedImmutableObject;              //@synthesize updatedImmutableObject=_updatedImmutableObject - In the implementation block
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(id)initWithUpdatedObject:(id)arg1 ;
-(id<MSPImmutableObject>)updatedImmutableObject;
-(id)initWithUpdatedImmutableObject:(id)arg1 ;
-(id<MSPMutableObject>)updatedObject;
-(NSString *)description;
@end

