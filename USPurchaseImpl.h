/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USPurchase.h>

@class NSString;

@interface USPurchaseImpl : NSObject <USPurchase> {

	NSString* _productIdentifier;
	unsigned long long _quantity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long quantity;               //@synthesize quantity=_quantity - In the implementation block
-(NSString *)productIdentifier;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)quantity;
@end

