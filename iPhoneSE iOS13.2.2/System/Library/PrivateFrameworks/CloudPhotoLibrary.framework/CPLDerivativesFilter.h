/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CPLDerivativesFilter : NSObject <NSSecureCoding> {

	BOOL _dropForImages;
	BOOL _dropForVideos;

}
+(BOOL)supportsSecureCoding;
+(id)dropDerivativesForImages:(BOOL)arg1 videos:(BOOL)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initDroppingDerivativesForImages:(BOOL)arg1 videos:(BOOL)arg2 ;
-(BOOL)mightDropSomeDerivativesForSourceType:(unsigned long long)arg1 isVideo:(BOOL)arg2 ;
-(BOOL)shouldDropDerivativeOfType:(unsigned long long)arg1 fromSourceType:(unsigned long long)arg2 isVideo:(BOOL)arg3 ;
@end

