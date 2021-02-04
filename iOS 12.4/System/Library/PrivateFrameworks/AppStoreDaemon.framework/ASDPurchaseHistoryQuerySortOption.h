/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding> {

	BOOL _ascending;
	NSString* _name;

}

@property (copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign) BOOL ascending;              //@synthesize ascending=_ascending - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAscending:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 ascending:(BOOL)arg2 ;
-(BOOL)ascending;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end
