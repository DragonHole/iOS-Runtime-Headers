/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesGeotaggedItemDataSourceChange.h>

@class NSSet, NSString;

@interface _PXMapStoreChange : NSObject <PXPlacesGeotaggedItemDataSourceChange> {

	NSSet* _addedItems;
	NSSet* _removedItems;
	NSSet* _updatedItems;

}

@property (retain) NSSet * addedItems;                              //@synthesize addedItems=_addedItems - In the implementation block
@property (retain) NSSet * removedItems;                            //@synthesize removedItems=_removedItems - In the implementation block
@property (retain) NSSet * updatedItems;                            //@synthesize updatedItems=_updatedItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithChange:(id)arg1 ;
-(NSSet *)updatedItems;
-(BOOL)hasChanges;
-(void)setRemovedItems:(NSSet *)arg1 ;
-(NSSet *)addedItems;
-(NSSet *)removedItems;
-(void)setAddedItems:(NSSet *)arg1 ;
-(id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 updatedItems:(id)arg3 ;
-(void)setUpdatedItems:(NSSet *)arg1 ;
-(void)dealloc;
@end

