/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CRSIconLayoutState : NSObject <NSSecureCoding> {

	NSArray* _pages;

}

@property (nonatomic,readonly) NSArray * pages;              //@synthesize pages=_pages - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)pages;
-(id)initWithPages:(id)arg1 ;
-(id)iconOrder;
@end
