/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {

	NSSQLUpdateColumnsIntermediate* _updateColumns;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isUpdateScoped;
-(void)setUpdateColumnsIntermediate:(id)arg1 ;
-(id)initWithEntity:(id)arg1 inScope:(id)arg2 ;
-(id)updateColumnsIntermediate;
@end
