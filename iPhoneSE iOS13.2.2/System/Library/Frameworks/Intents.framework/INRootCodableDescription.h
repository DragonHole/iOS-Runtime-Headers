/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableDescription.h>

@class NSArray;

@interface INRootCodableDescription : INCodableDescription {

	NSArray* _referencedCodableDescriptions;

}

@property (setter=_setReferencedCodableDescriptions:,nonatomic,retain) NSArray * referencedCodableDescriptions;              //@synthesize referencedCodableDescriptions=_referencedCodableDescriptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)referencedCodableDescriptions;
-(void)_setReferencedCodableDescriptions:(id)arg1 ;
@end

