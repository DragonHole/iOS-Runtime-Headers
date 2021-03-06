/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSSet;

@interface HDSQLiteDatabaseTableSchema : NSObject {

	NSString* _name;
	NSDictionary* _columns;
	NSSet* _indices;

}

@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * columns;              //@synthesize columns=_columns - In the implementation block
@property (nonatomic,retain) NSSet * indices;                     //@synthesize indices=_indices - In the implementation block
-(NSDictionary *)columns;
-(void)setColumns:(NSDictionary *)arg1 ;
-(void)setIndices:(NSSet *)arg1 ;
-(NSSet *)indices;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

