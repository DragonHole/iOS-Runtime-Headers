/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLModel;

@interface NSSQLObjectIDRequestContext : NSSQLStoreRequestContext {

	NSDictionary* _entitiesAndCounts;
	NSSQLModel* _model;

}

@property (nonatomic,readonly) NSDictionary * entitiesAndCounts;              //@synthesize entitiesAndCounts=_entitiesAndCounts - In the implementation block
@property (nonatomic,readonly) NSSQLModel * model;                            //@synthesize model=_model - In the implementation block
-(void)dealloc;
-(NSSQLModel *)model;
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(NSDictionary *)entitiesAndCounts;
@end

