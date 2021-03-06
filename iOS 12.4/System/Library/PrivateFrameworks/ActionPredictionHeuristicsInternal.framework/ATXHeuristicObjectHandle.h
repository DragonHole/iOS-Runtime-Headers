/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface ATXHeuristicObjectHandle : NSObject <NSSecureCoding> {

	NSNumber* _deviceHandle;
	NSNumber* _objHandle;
	id _obj;

}

@property (nonatomic,readonly) id obj;              //@synthesize obj=_obj - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)obj;
-(id)initWithDevice:(id)arg1 wrapping:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

