/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class USBatchItem, NSArray;

@interface USDeliveryPacket : NSObject {

	USBatchItem* _batchItem;
	NSArray* _route;

}

@property (nonatomic,retain) USBatchItem * batchItem;              //@synthesize batchItem=_batchItem - In the implementation block
@property (nonatomic,retain) NSArray * route;                      //@synthesize route=_route - In the implementation block
-(USBatchItem *)batchItem;
-(id)initWithBatchItem:(id)arg1 route:(id)arg2 ;
-(void)setBatchItem:(USBatchItem *)arg1 ;
-(id)init;
-(NSArray *)route;
-(void)setRoute:(NSArray *)arg1 ;
@end

