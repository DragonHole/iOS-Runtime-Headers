/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSValueTransformer;

@interface VSFailableValueTransformer : NSValueTransformer {

	NSValueTransformer* _objectValueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * objectValueTransformer;              //@synthesize objectValueTransformer=_objectValueTransformer - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(NSValueTransformer *)objectValueTransformer;
-(void)setObjectValueTransformer:(NSValueTransformer *)arg1 ;
@end

