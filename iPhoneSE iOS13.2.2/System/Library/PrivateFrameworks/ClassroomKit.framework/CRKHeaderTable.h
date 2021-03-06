/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKTablePrinting.h>

@class CRKTable, NSArray;

@interface CRKHeaderTable : NSObject <CRKTablePrinting> {

	CRKTable* _table;
	NSArray* _headers;
	NSArray* _keyPaths;
	NSArray* _objects;

}

@property (nonatomic,copy,readonly) NSArray * headers;               //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * keyPaths;              //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy,readonly) NSArray * objects;               //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) CRKTable * table;                     //@synthesize table=_table - In the implementation block
-(NSArray *)objects;
-(CRKTable *)table;
-(NSArray *)headers;
-(NSArray *)keyPaths;
-(id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2 ;
-(id)tableString;
-(id)initWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3 ;
@end

