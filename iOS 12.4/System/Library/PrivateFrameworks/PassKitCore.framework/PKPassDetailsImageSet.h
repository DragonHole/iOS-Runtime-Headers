/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassDetailsImageSet : PKPassImageSet {

	PKImage* _cardHolderPicture;

}

@property (nonatomic,retain) PKImage * cardHolderPicture;              //@synthesize cardHolderPicture=_cardHolderPicture - In the implementation block
+(long long)imageSetType;
+(BOOL)supportsSecureCoding;
+(BOOL)shouldCache;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setCardHolderPicture:(PKImage *)arg1 ;
-(PKImage *)cardHolderPicture;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
