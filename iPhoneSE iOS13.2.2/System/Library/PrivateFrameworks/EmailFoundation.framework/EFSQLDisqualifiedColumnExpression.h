/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFSQLColumnExpression.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFSQLExpressable.h>

@class EFSQLColumnExpression, NSString;

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable, EFSQLExpressable> {

	EFSQLColumnExpression* _columnExpression;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EFSQLColumnExpression * columnExpression;              //@synthesize columnExpression=_columnExpression - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)ef_SQLExpression;
-(id)cachedSelf;
-(EFSQLColumnExpression *)columnExpression;
@end
