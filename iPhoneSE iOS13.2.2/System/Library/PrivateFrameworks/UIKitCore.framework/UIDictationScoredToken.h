/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDictationToken.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding> {

	double _confidenceScore;

}

@property (nonatomic,readonly) double confidenceScore;              //@synthesize confidenceScore=_confidenceScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidenceScore;
-(id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 confidenceScore:(double)arg4 ;
-(id)_descriptionExtra;
@end
