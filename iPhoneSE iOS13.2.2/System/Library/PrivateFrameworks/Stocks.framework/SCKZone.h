/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCKZoneStore;
@class SCKZoneSchema, NSArray, SCKZoneDiff;

@interface SCKZone : NSObject {

	SCKZoneSchema* _schema;
	id<SCKZoneStore> _store;

}

@property (nonatomic,retain) id<SCKZoneStore> store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) SCKZoneSchema * schema;                     //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clientRecords; 
@property (nonatomic,copy,readonly) SCKZoneDiff * clientDiff; 
@property (nonatomic,readonly) BOOL needsFirstSync; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
-(SCKZoneSchema *)schema;
-(id<SCKZoneStore>)store;
-(void)setStore:(id<SCKZoneStore>)arg1 ;
-(BOOL)isDirty;
-(SCKZoneDiff *)clientDiff;
-(id)initWithSchema:(id)arg1 store:(id)arg2 ;
-(NSArray *)clientRecords;
-(BOOL)needsFirstSync;
@end

