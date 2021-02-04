/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchManagedBooksResultObject : CATTaskResultObject {

	NSArray* _books;

}

@property (nonatomic,copy,readonly) NSArray * books;              //@synthesize books=_books - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithBooks:(id)arg1 ;
-(NSArray *)books;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
